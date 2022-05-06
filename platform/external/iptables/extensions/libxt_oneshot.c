#include <stdio.h>
#include <xtables.h>
#include <linux/netfilter/xt_oneshot.h>

static struct xtables_match oneshot_mt_reg[] = {
{
	.version       = XTABLES_VERSION,
	.name          = "oneshot",
	.revision      = 0,
		.family        = NFPROTO_IPV4,
		.size          = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
		.userspacesize = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
	},
	{
		.version       = XTABLES_VERSION,
		.name          = "oneshot",
		.revision      = 0,
		.family        = NFPROTO_IPV6,
		.size          = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
		.userspacesize = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
	},
	{
		.version       = XTABLES_VERSION,
		.name          = "oneshot",
		.revision      = 1,
		.family        = NFPROTO_UNSPEC,
		.size          = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
		.userspacesize = XT_ALIGN(sizeof(struct xt_oneshot_match_info)),
	},
};
void _init(void)
{
	xtables_register_matches(oneshot_mt_reg, ARRAY_SIZE(oneshot_mt_reg));
}