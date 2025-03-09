///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplodeOnContactType.h>
#include <fb/GrenadeEntityData.h>

namespace fb {
	class PVZGrenadeEntityData : public GrenadeEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZGrenadeEntityData"); }
		virtual ~PVZGrenadeEntityData() override {}
		PVZGrenadeEntityData() {
			m_explodeOnContactType = ExplodeOnContactType::ExplodeOnContactType_None;
		};

		ExplodeOnContactType m_explodeOnContactType; // 0x160 (352)
	}; // 0x170 (368)
}

