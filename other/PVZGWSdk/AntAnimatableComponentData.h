///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntAnimatableComponentMeshData.h>
#include <fb/AntAnimationHandlerData.h>
#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/JointOutputModeEnum.h>
#include <fb/Realm.h>
#include <fb/SubRealm.h>

namespace fb {
	class AntAnimatableComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntAnimatableComponentData"); }
		virtual ~AntAnimatableComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AntAnimatableComponentData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_subRealm = SubRealm::SubRealm_All;
			m_jointOutputMode = JointOutputModeEnum::JointOutputModeEnum_GameplayBones;
			m_autoActivate = false;
			m_animationControlledFromStart = false;
			m_forceDisableCulling = false;
		};

		Realm m_realm; // 0x70 (112)
		SubRealm m_subRealm; // 0x74 (116)
		AntAnimationHandlerData m_animationData; // 0x78 (120)
		Array<AntAnimatableComponentMeshData> m_meshDatas; // 0x168 (360)
		JointOutputModeEnum m_jointOutputMode; // 0x170 (368)
		bool m_autoActivate; // 0x174 (372)
		bool m_animationControlledFromStart; // 0x175 (373)
		bool m_forceDisableCulling; // 0x176 (374)
	}; // 0x180 (384)
}

