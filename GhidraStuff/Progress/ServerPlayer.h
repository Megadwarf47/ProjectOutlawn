//assuming if its undefined8 its a ptr.

namespace fb {

    class ServerPlayerChangeChatChannelMessage : public Message { 
    public:
		
		unsigned long long* unknown1;
		unsigned long long* unknown2;
		
		//BF3 PDB:
        //ServerPlayer* m_player; 
        //unsigned long long m_newMask;
    };

    class ServerPlayerChangedSquadSpawnerStatusMessage : public Message { //weird
    public:
        ServerPlayer* m_player; 
    };

    class ServerPlayerChangedVoiceChannelMessage : public Message {
    public:
        ServerPlayer* m_player; 
    };

    class ServerPlayerCreateMessage : public Message {
    public:
        ServerPlayer* m_player; 
    };

    class ServerPlayerCreatedForConnectionMessage : public Message {
    public:
        ServerConnection* m_connection; 
        ServerPlayer* m_player; 
    };

    class ServerPlayerDestroyMessage : public Message {
    public:
        ServerPlayer* m_player; 
    };

    class ServerPlayerEnterEntryMessage : public Message {
    public:
	
		
		ServerPlayer* m_player;
		unsigned long long* unknown1;
		unsigned long long* unknown2;
		unsigned long long* unknown3;
		bool m_hiddenObject;
	
	
		//BF3 PDB:
        //ServerPlayer* m_player;
        //ServerEntryComponent* m_newEntry;
        //ServerEntryComponent* m_oldEntry;
        //int m_playerSide;
        //int m_playerId;
        //bool m_hiddenObject;
    };

    class ServerPlayerEnteredLevelMessage : public Message {
    public:
		
		ServerPlayer* m_player; 
	
		//BF3 PDB:
        //ServerPlayer* m_player; 
        //bool m_isLoadingSave;
    };

    class ServerPlayerExitEntryMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerControllableEntity* m_controllable;
        ServerEntryComponent* m_entry;
    };

    class ServerPlayerInstantSuicideMessage : public Message {
    public:
	
		ServerPlayer* m_player;
		unsigned long long* unknown1;
		unsigned int unknown2;
	
		//BF3 PDB:
        //ServerPlayer* m_player;
        //ServerDamageGiverInfo* m_damageGiverInfo;
    };

    class ServerPlayerKilledMessage : public Message {
    public:
	
		unsigned long long* unknown1;
		unsigned long long* unknown2;
		unsigned long long* unknown3;
		char* m_weaponName;
		unsigned long long* unknown4;
		Vec3 m_position;
		unsigned long long* unknown5;
		unsigned short unknown6;
		bool unknown7;
		unsigned int unknown8;
		bool unknown9;
	
		//BF3 PDB
        //ServerPlayer* m_victim;
        //ServerDamageGiverInfo* m_damageGiverInfo;
        //ServerPlayer* m_inflictor;
        //char* m_weaponName;
        //Vec3 m_position;
        //ServerEntryComponent* m_oldEntry;
        //bool m_roadKill;
        //bool m_headShot;
        //bool m_victimInReviveState;
    };

    class ServerPlayerKitReplacedMessage : public Message { //weird
    public:
        ServerPlayer* m_player;
        ServerSoldierEntity* m_oldSoldier;
        ServerSoldierEntity* m_newSoldier;
    };

    class ServerPlayerLeftLevelMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerLevelLoadedMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerManDownRevivedMessage : public Message { //weird
    public:
        ServerPlayer* m_player;
        bool m_isAdrenalineRevive;
        ServerPlayer* m_reviver;
    };

    class ServerPlayerManuallySelectedSpawnPointMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerMeleeInteruptedMessage : public Message { //weird
    public:
        ServerPlayer* m_killer;
        bool m_killedAttacker;
        ServerPlayer* m_meleeAttacker;
    };

    class ServerPlayerNoInteractivityKickMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerReleasingLevelMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerRespawnMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerReviveAcceptedMessage : public Message {
    public:
	
		bool m_reviverPlayerIdValid;
		unsigned long long* unknown1; 
	
		//BF3 PDB:
        //bool m_reviverPlayerIdValid;
        //unsigned int m_reviverPlayerId;
        //unsigned int m_reviveePlayerId;
    };

    class ServerPlayerReviveMessage : public Message {
    public:
        bool m_reviverPlayerIdValid;
        unsigned long long* unknown1; 
        unsigned int unknown2;
		
		
		//BF3 PDB:
		//bool m_reviverPlayerIdValid;
        //unsigned int m_reviverPlayerId;
        //unsigned int m_reviveePlayerId;
    };

    class ServerPlayerReviveRefusedMessage : public Message { //weird
    public:
        unsigned int m_reviveePlayerId;
    };

    class ServerPlayerSpawnAtVehicleMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerVehicleEntity* m_vehicleToSpawnAt;
    };

    class ServerPlayerSpawnOnPlayerMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerPlayer* m_playerToSpawnOn;
        char* m_controllableType;
    };

   class ServerPlayerSpawnOnSelectedSpawnPointMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

   class ServerPlayerSquadLeaderStatusChangedMessage : public Message { //weird
    public:
        ServerPlayer* m_player;
    };

   class ServerPlayerSwitchSquadMessage : public Message {
    public:
        ServerPlayer* m_player;
        int m_oldSquad;
    };

   class ServerPlayerSwitchTeamMessage : public Message {
    public:
        ServerPlayer* m_player;
        int m_oldTeam;
    };

   class ServerPlayerTeamKillKickMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

   class ServerPlayerTickMessage : public Message {
    public:
	
		ServerPlayer* m_player; 
		float m_timeInState; //undefined4
		bool unknown1; //undefined
		unsigned long long* unknown2;
	
		//BF3 PDB:
        //ServerPlayer* m_player;
        //float m_timeInState;
    };

}
