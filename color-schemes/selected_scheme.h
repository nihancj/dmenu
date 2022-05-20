static const char norm_fg[] = "#cee4f5";
static const char norm_bg[] = "#0a1916";
static const char norm_border[] = "#909fab";

static const char sel_fg[] = "#cee4f5";
static const char sel_bg[] = "#6FC7FD";
static const char sel_border[] = "#cee4f5";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
