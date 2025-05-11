///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DestructionEdgeModelComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class RigidMeshAsset;
}

namespace fb {
	class EdgeModelComponentData : public DestructionEdgeModelComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EdgeModelComponentData"); }
		virtual ~EdgeModelComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		EdgeModelComponentData() {
			m_maxInstanceCount = 0;
		};

		RefArray<RigidMeshAsset> m_rigidMeshes; // 0x70 (112)
		u32 m_maxInstanceCount; // 0x78 (120)
	}; // 0x80 (128)
}

