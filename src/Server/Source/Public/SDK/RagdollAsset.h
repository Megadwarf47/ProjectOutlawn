///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class RagdollAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RagdollAsset"); }
		virtual ~RagdollAsset() override {}
		RagdollAsset() {
			m_resource = ;
			m_useServerRagdoll = false;
		};

		MaterialDecl m_materialPair; // 0x18 (24)
		ResourceRef m_resource; // 0x20 (32)
		bool m_useServerRagdoll; // 0x28 (40)
	}; // 0x30 (48)
}

