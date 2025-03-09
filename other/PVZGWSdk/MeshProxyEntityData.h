///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class MeshAsset;
}

namespace fb {
	class MeshProxyEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshProxyEntityData"); }
		virtual ~MeshProxyEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		MeshProxyEntityData() {
		};

		CtrRef<MeshAsset> m_mesh; // 0x60 (96)
		Array<LinearTransform> m_basePoseTransforms; // 0x68 (104)
	}; // 0x70 (112)
}

