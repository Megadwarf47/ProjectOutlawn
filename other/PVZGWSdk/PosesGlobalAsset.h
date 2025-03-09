///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/RefArray.h>

namespace fb {
	class PoseDefinition;
}

namespace fb {
	class PosesGlobalAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PosesGlobalAsset"); }
		virtual ~PosesGlobalAsset() override {}
		PosesGlobalAsset() {
		};

		RefArray<PoseDefinition> m_poses; // 0x18 (24)
		CtrRef<PoseDefinition> m_defaultPose; // 0x20 (32)
	}; // 0x28 (40)
}

