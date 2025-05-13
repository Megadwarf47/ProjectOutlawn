///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UnlockAsset.h>
#include <fb/Vec4.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class CamoUnlockAsset : public UnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CamoUnlockAsset"); }
		virtual ~CamoUnlockAsset() override {}
		CamoUnlockAsset() {
			m_adaptiveColors = false;
		};

		CtrRef<TextureAsset> m_camoTexture; // 0x40 (64)
		bool m_adaptiveColors; // 0x48 (72)
		Vec4 m_color1; // 0x50 (80)
		Vec4 m_color2; // 0x60 (96)
		Vec4 m_color3; // 0x70 (112)
		Vec4 m_color4; // 0x80 (128)
	}; // 0x90 (144)
}

