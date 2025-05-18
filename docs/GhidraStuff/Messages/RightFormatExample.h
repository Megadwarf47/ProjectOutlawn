#pragma once

#include <fb/MessageListener.h>
#include <fb/SquadId.h>

namespace fb {
	class ClientPlayer;
	class ClientGameEntity;
	class ClientVehicleEntity;
	class ClientEntryComponent;

	class ClientPlayerAmmoPickupMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerAmmoPickupMessage* th);
		static newInstance_t newInstance;
	};

	class ClientPlayerChangedAllowedToSpawnOnMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerChangedAllowedToSpawnOnMessage* th);
		static newInstance_t newInstance;
	};

	class ClientPlayerChangedMatchReadyStatusMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerChangedMatchReadyStatusMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerChangedPlayerViewMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerChangedPlayerViewMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerChangedSquadLeaderStatusMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerChangedSquadLeaderStatusMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerChangedVoiceChannelMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerChangedVoiceChannelMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerConnectMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerConnectMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
		bool m_isConnecting;
	};

	class ClientPlayerDeletedMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerDeletedMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerEnterEntryMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerEnterEntryMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
		fb::ClientEntryComponent* m_newEntry;
		fb::ClientEntryComponent* m_oldEntry;
		int m_playerSide;
		int m_playerId;
		bool m_hiddenObject;
	};

	class ClientPlayerEnterExitVehicleMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerEnterExitVehicleMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientVehicleEntity* m_vehicle;
		fb::ClientPlayer* m_player;
		bool m_entering;
	};

	class ClientPlayerKilledMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerKilledMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_victim;
	};

	class ClientPlayerLocalSetMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerLocalSetMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
		fb::ClientPlayer* m_previousLocalPlayer;
	};

	class ClientPlayerManDownMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerManDownMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_victim;
	};

	class ClientPlayerNewSquadOrderMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerNewSquadOrderMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_orderReceiver;
		fb::ClientGameEntity* m_targetObject;
	};

	class ClientPlayerRequestCameraChangeMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerRequestCameraChangeMessage* th);
		static newInstance_t newInstance;
	};

	class ClientPlayerSwitchSquadMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerSwitchSquadMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
		fb::SquadId m_oldSquad;
	};

	class ClientPlayerSwitchTeamMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerSwitchTeamMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerUpdateCameraComponentMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerUpdateCameraComponentMessage* th);
		static newInstance_t newInstance;
	public:
		fb::ClientPlayer* m_player;
	};

	class ClientPlayerWeaponPickupMessage : public fb::Message {
	public:
		typedef void* (__thiscall* newInstance_t)(fb::ClientPlayerWeaponPickupMessage* th);
		static newInstance_t newInstance;
	};
}
