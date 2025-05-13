///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PVZUIMarkerType.h>
#include <fb/RefArray.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>
#include <fb/Vec2.h>

namespace fb {
	class CharacterCustomizationAsset;
	class TextureAsset;
}

namespace fb {
	class PVZUIMarkerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIMarkerEntityData"); }
		virtual ~PVZUIMarkerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZUIMarkerEntityData() {
			m_markerType = PVZUIMarkerType::PVZUIMarkerType_CapturePoint;
			m_uniqueID = 0;
			m_visibleRadius = -1;
			m_enabled = false;
		};

		PVZUIMarkerType m_markerType; // 0x60 (96)
		s32 m_uniqueID; // 0x64 (100)
		String m_coopLabel; // 0x68 (104)
		CtrRef<TextureAsset> m_icon; // 0x70 (112)
		RefArray<CharacterCustomizationAsset> m_allowableCustomizations; // 0x78 (120)
		s32 m_visibleRadius; // 0x80 (128)
		Vec2 m_arrowPixelOffset; // 0x84 (132)
		bool m_enabled; // 0x8C (140)
	}; // 0x90 (144)
}

