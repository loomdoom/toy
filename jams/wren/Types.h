#pragma once

#include <wren/Forward.h>

#if !defined MUD_MODULES || defined MUD_OBJ_LIB
#include <obj/Type.h>
#include <obj/Vector.h>
#endif

#ifndef MUD_MODULES
#include <infra/Types.h>
#include <obj/Types.h>
#include <pool/Types.h>
#include <refl/Types.h>
#include <proto/Types.h>
#include <tree/Types.h>
#include <srlz/Types.h>
#include <math/Types.h>
#include <geom/Types.h>
#include <procgen/Types.h>
#include <lang/Types.h>
#include <ctx/Types.h>
#include <ui/Types.h>
#include <uio/Types.h>
#include <snd/Types.h>
#include <ctx-glfw/Types.h>
#include <ui-vg/Types.h>
#include <bgfx/Types.h>
#include <gfx/Types.h>
#include <gfx-pbr/Types.h>
#include <gfx-obj/Types.h>
#include <gfx-gltf/Types.h>
#include <gfx-ui/Types.h>
#include <tool/Types.h>
#include <procgen-gfx/Types.h>
#include <util/Types.h>
#include <core/Types.h>
#include <visu/Types.h>
#include <edit/Types.h>
#include <block/Types.h>
#include <shell/Types.h>
#endif

#ifndef MUD_CPP_20
#include <string>
#include <cstdint>
#include <vector>
#endif


namespace mud
{
    // Exported types
}
