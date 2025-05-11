///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class MaterialPropertyFireData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyFireData"); }
		virtual ~MaterialPropertyFireData() override {}
		MaterialPropertyFireData() {
			m_isBurnable = false;
		};

		bool m_isBurnable; // 0x10 (16)
	}; // 0x18 (24)
}

