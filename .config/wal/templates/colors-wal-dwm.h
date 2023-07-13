static const char norm_fg[] = "{color15}";
static const char norm_bg[] = "#111111";
static const char norm_border[] = "{color0}";

static const char sel_fg[] = "{color15}";
static const char sel_bg[] = "{color2}";
static const char sel_border[] = "{color15}";

static const char special[] = "{color9}";
static const char special2[] = "#D4AF37";
static const char def_bg[] = "#111111";

static const char *colors[][3]      = {{
    /*               fg           bg         border                         */
    [SchemeNorm] = {{ norm_fg,     norm_bg,   norm_border }}, // unfocused wins
    [SchemeSel]  = {{ norm_bg,      sel_bg,    sel_bg }},  // the focused win
    [SchemeMark]  = {{ special2,      norm_bg,    special2 }},  // the focused win
    [SchemeTitle] =  {{ sel_bg,      norm_bg,    norm_border }},
}};
