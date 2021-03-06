#ifdef USE_TILE_LOCAL
#ifndef TILEREG_SPL_H
#define TILEREG_SPL_H

#include "tilereg-grid.h"

class SpellRegion : public GridRegion
{
public:
    SpellRegion(const TileRegionInit &init);

    virtual void update() override;
    virtual int handle_mouse(MouseEvent &event) override;
    virtual bool update_tip_text(string &tip) override;
    virtual bool update_tab_tip_text(string &tip, bool active) override;
    virtual bool update_alt_text(string &alt) override;

    virtual const string name() const override { return "Spells"; }

protected:
    virtual int get_max_slots();

    virtual void pack_buffers() override;
    virtual void draw_tag() override;
    virtual void activate() override;
};

#endif
#endif
