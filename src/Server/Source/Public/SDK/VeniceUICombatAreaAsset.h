///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UICombatAreaAsset.h>

namespace fb {
	class UIDistanceFieldAsset;
}

namespace fb {
	class VeniceUICombatAreaAsset : public UICombatAreaAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceUICombatAreaAsset"); }
		virtual ~VeniceUICombatAreaAsset() override {}
		VeniceUICombatAreaAsset() {
		};

		CtrRef<UIDistanceFieldAsset> m_distanceField; // 0x20 (32)
		CtrRef<UIDistanceFieldAsset> m_surroundingDistanceField; // 0x28 (40)
	}; // 0x30 (48)
}

