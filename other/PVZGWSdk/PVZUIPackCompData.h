///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/UIComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class PVZUIPackCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIPackCompData"); }
		virtual ~PVZUIPackCompData() override {}
		PVZUIPackCompData() {
		};

		RefArray<TextureAsset> m_packTextures; // 0x30 (48)
	}; // 0x38 (56)
}

