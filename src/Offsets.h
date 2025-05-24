//Offsets in src

//Server.cpp
SERVER_CONSTRUCTOR => 0x1406eea10
SERVER_START => 0x1406f8f80

SERVERPLAYER_SETTEAMID => 0x140767A60 //ServerPlayer::SetTeamId
SERVERPLAYER_LEAVEINGAME => ? //
SERVERPLAYER_DISCONNECT => ? //

SERVERPEER_DELETECONNECTION => ? //
SERVERPEER_CONNECTIONFORPLAYER => ? //

SERVERCONNECTION_DISCONNECT => ? //
SERVERCONNECTION_KICKPLAYER => 0x1407056D0 //ServerConnection::KickPlayer

SERVERPLAYERMANAGER_DELETEPLAYER => ?

APPLY_SETTINGS => ? //Closest thing: ApplySettingOnCreation => 0x14168b748
CLIENT_INIT_NETWORK => ? //Closest thing: Network => 0x141578778
CLIENT_CONNECTTOADDRESS => 0x140559CD0 //Client::ConnectToAddress

SERVER_PATCH => ? //

//Server.h
SERVERGAMECONTEXT_INSTANCE => ? //Closest thing: => 

//Program.cpp
CLIENT_STATE_CHANGE => 0x14053F180 //Client::StateChange
GET_SETTINGS_OBJECT => 0x1403BCEA0 //SettingsManager::GetSettingsObject

//Program.h
GLOBAL_CLIENT => ? //
GLOBAL_SETTINGS_MANAGER => 0x141eac0b0 //
GET_CLIENT_INSTANCE => ? //Closest thing: GetClientRect => 0x141bc9ece

//PlatformUtils.cpp
EXECUTIONCONTEXT_GETNATIVEDATAPATH => ? //Closest thing: dataPath => 0x1416725f0

//Other stuff

ImageBase => 0x140000000

//Dedicated Server  
Main::Init => 0x14000B070
Main::SpawnServer => 0x140011AE0
GameLoopInfo::Init => 0x14000AFB0
BFSERVERSETTINGS => 0x1421EFE10
BFDedicatedServerSettings => 0x141C472E8

//MULTI PURPOSE
EnginePeer::Init => 0x1408038F0
LevelSetup::LevelSetup => 0x141464B10
LevelSetup::SetInclusionOption => 0x1404FA7F0
ServerPlayerManager::CreatePlayer => 0x14075CDC0
GameTimeSettings => 0x141726fe0

//CLIENT

//FOR DEBUGGING
MessaageManager::DispatchMessage => 0x14035AD00
OnlineManager::OnGotDisconnected => 0x14055D3B0
