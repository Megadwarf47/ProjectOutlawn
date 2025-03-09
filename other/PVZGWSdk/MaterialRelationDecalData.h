///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class DecalTemplateData;
}

namespace fb {
	class MaterialRelationDecalData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationDecalData"); }
		virtual ~MaterialRelationDecalData() override {}
		MaterialRelationDecalData() {
		};

		CtrRef<DecalTemplateData> m_decal; // 0x10 (16)
		CtrRef<DecalTemplateData> m_exitDecal; // 0x18 (24)
	}; // 0x20 (32)
}

