///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CoverPeekBinding.h>
#include <fb/EntityData.h>

namespace fb {
	class CoverPeekEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CoverPeekEntityData"); }
		virtual ~CoverPeekEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		CoverPeekEntityData() {
			m_detectDistanceForward = 1.f;
			m_detectDistanceHorizontal = 0.4f;
			m_overEnabled = true;
			m_horizEnabled = false;
		};

		CoverPeekBinding m_binding; // 0x18 (24)
		float m_detectDistanceForward; // 0x7C (124)
		float m_detectDistanceHorizontal; // 0x80 (128)
		bool m_overEnabled; // 0x84 (132)
		bool m_horizEnabled; // 0x85 (133)
	}; // 0x88 (136)
}

