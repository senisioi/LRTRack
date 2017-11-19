#include "LindenbergResearch.hpp"

// The plugin-wide instance of the Plugin class
Plugin *plugin;

void init(rack::Plugin *p) {
    plugin = p;
    plugin->slug = "Lindenberg Research";
    p->addModel(createModel<SimpleFilterWidget>("Lindenberg Research", "LPFilter24dB", "24dB Lowpass Filter"));
    p->addModel(createModel<BlankPanelWidget>("Lindenberg Research", "BlankPanel", "Blank Panel 26TE"));
    p->addModel(createModel<ReShaperWidget>("Lindenberg Research", "ReShaper", "ReShaper Wavefolder"));
}
