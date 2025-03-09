namespace fb {

    class ServerPlayerChangeChatChannelMessage : public Message {
    public:
        ServerPlayer* m_player;
        uint64_t m_newMask;
    };

    class ServerPlayerChangedSquadSpawnerStatusMessage : public Message {
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
        ServerConnection * m_connection;
        ServerPlayer* m_player;
    };

    class ServerPlayerDestroyMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerEnterEntryMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerEntryComponent* m_newEntry;
        ServerEntryComponent* m_oldEntry;
        int m_playerSide;
        int m_playerId;
        bool m_hiddenObject;
    };

    class ServerPlayerEnteredLevelMessage : public Message {
    public:
        ServerPlayer* m_player;
        bool* m_isLoadingSave;
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
        ServerDamageGiverInfo* m_damageGiverInfo;
    };

    class ServerPlayerKilledMessage : public Message {
    public:
        ServerPlayer* m_victim;
        ServerDamageGiverInfo* m_damageGiverInfo;
        ServerPlayer* m_inflictor;
        char* m_weaponName;
        Vec3 m_position;
        ServerEntryComponent* m_oldEntry;
        bool m_roadKill;
        bool m_headShot;
        bool m_victimInReviveState;
    };

    class ServerPlayerKitReplacedMessage : public Message {
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

    class ServerPlayerManDownRevivedMessage : public Message {
    public:
        ServerPlayer* m_player;
        bool m_isAdrenalineRevive;
        ServerPlayer* m_reviver;
    };

    class ServerPlayerManuallySelectedSpawnPointMessage : public Message {
    public:
        ServerPlayer* m_player;
    };

    class ServerPlayerMeleeInteruptedMessage : public Message {
    public:
        ServerPlayer* m_killer;
        bool m_killedAttacker;
        ServerPlayer* m_meleeAttacker;
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
        uint m_reviverPlayerId;
        uint m_reviveePlayerId;
    };

    class ServerPlayerReviveMessage : public Message {
    public:
        bool m_reviverPlayerIdValid;
        unsigned long long m_reviverPlayerId;
        uint m_reviveePlayerId;
    };

    class ServerPlayerReviveRefusedMessage : public Message {
    public:
        uint m_reviveePlayerId;
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

   class ServerPlayerSquadLeaderStatusChangedMessage : public Message {
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
        float m_timeInState;
    };

}
