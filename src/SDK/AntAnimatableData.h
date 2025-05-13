///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/CtrRef.h>

namespace fb {
	class MasterSkeletonAsset;
	class ProceduralAwarenessAntRefs;
}

namespace fb {
	struct AntAnimatableData {
		AntAnimatableData() {
		};

		AntRef m_actor; // 0x0 (0)
		AntRef m_sceneOpMatrix; // 0x14 (20)
		CtrRef<ProceduralAwarenessAntRefs> m_proceduralAwareness; // 0x28 (40)
		AntRef m_rightHandEffectorDisableOverride; // 0x30 (48)
		AntRef m_leftHandEffectorDisableOverride; // 0x44 (68)
		CtrRef<MasterSkeletonAsset> m_masterSkeletonAsset; // 0x58 (88)
	}; // 0x60 (96)
}

