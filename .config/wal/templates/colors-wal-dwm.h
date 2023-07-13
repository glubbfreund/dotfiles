static const char norm_fg[] = "{color15}";
static const char norm_bg[] = "{color0}";
static const char norm_border[] = "{color0}";

static const char sel_fg[] = "{color15}";
static const char sel_bg[] = "{color2}";
static const char sel_border[] = "{color15}";

static const char special[] = "{color9}";
static const char special2[] = "{color3}";

static const char *colors[][3]      = {{
    /*               fg           bg         border                         */
    [SchemeNorm] = {{ norm_fg,     norm_bg,   norm_border }}, // unfocused wins
    [SchemeSel]  = {{ norm_bg,      special2,    sel_bg }},  // the focused win
    [SchemeMark]  = {{ special,      norm_bg,    special }},  // the focused win
    [SchemeTitle] =  {{ sel_bg,      norm_bg,    norm_border }},
}};
