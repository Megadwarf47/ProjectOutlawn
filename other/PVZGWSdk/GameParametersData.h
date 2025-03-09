///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/GameAttributeData.h>
#include <fb/GameNetworkTopology.h>
#include <fb/GamePeer2PeerMode.h>
#include <fb/PersistenceGameType.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class GameRoleInformation;
}

namespace fb {
	class GameParametersData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameParametersData"); }
		virtual ~GameParametersData() override {}
		GameParametersData() {
			m_gameType = PersistenceGameType::PersistenceGameType_Singleplayer;
			m_queueCapacity = 0;
			m_mod = 0;
			m_maxSpectators = 0;
			m_gameTopology = GameNetworkTopology::GameNetworkTopology_Disabled;
			m_peerMode = GamePeer2PeerMode::GamePeer2PeerMode_FullMesh;
			m_voipTopology = GameNetworkTopology::GameNetworkTopology_Disabled;
			m_openToInvites = false;
			m_openToMatchmaking = false;
			m_openToJoinByPlayer = false;
			m_openToBrowsing = true;
			m_ranked = false;
			m_joinInProgressSupported = false;
			m_hostMigratable = false;
		};

		String m_serverName; // 0x18 (24)
		PersistenceGameType m_gameType; // 0x20 (32)
		u32 m_queueCapacity; // 0x24 (36)
		u32 m_mod; // 0x28 (40)
		u32 m_maxSpectators; // 0x2C (44)
		GameNetworkTopology m_gameTopology; // 0x30 (48)
		GamePeer2PeerMode m_peerMode; // 0x34 (52)
		GameNetworkTopology m_voipTopology; // 0x38 (56)
		Array<GameAttributeData> m_attributes; // 0x40 (64)
		RefArray<GameRoleInformation> m_roleConfiguration; // 0x48 (72)
		bool m_openToInvites; // 0x50 (80)
		bool m_openToMatchmaking; // 0x51 (81)
		bool m_openToJoinByPlayer; // 0x52 (82)
		bool m_openToBrowsing; // 0x53 (83)
		bool m_ranked; // 0x54 (84)
		bool m_joinInProgressSupported; // 0x55 (85)
		bool m_hostMigratable; // 0x56 (86)
	}; // 0x58 (88)
}

