//Offsets by Silkker

//DEDI SERVER
Main::Init => 0x14000B070
Main::SpawnServer => 0x140011AE0
GameLoopInfo::Init => 0x14000AFB0

BFSERVERSETTINGS => 0x1421EFE10 // Not sure about this
BFDedicatedServerSettings => 0x141C472E8 // Not sure about this

//MULTI PURPOSE
ServerPlayer::SetTeamId => 0x140767A60
EnginePeer::Init => 0x1408038F0
LevelSetup::LevelSetup => 0x141464B10
LevelSetup::SetInclusionOption => 0x1404FA7F0
ServerConnection::KickPlayer => 0x1407056D0
ServerPlayerManager::CreatePlayer => 0x14075CDC0
SettingsManager::GetSettingsObject => 0x1403BCEA0

//CLIENT
Client::ConnectToAddress => 0x140559CD0
Client::StateChange => 0x14053F180

//FOR DEBUGGING
MessaageManager::DispatchMessage => 0x14035AD00
OnlineManager::OnGotDisconnected => 0x14055D3B0


//Offsets to find (Not sure if all of these exist)

APPLY_SETTINGS => ?

CLIENT_STATE_CHANGE => ?
CLIENT_INIT_NETWORK => ?

GET_CLIENT_INSTANCE => ?
GET_SETTINGS_OBJECT => ?

SERVER_START => ?
SERVER_CONSTRUCTOR => ?
SERVER_PATCH => ?
SERVER_PATCH2 => ?
SERVERPLAYERMANAGER => ?
SERVERGAMECONTEXT_INSTANCE => ?

GLOBAL_CLIENT => ?
GLOBAL_SETTINGS_MANAGER => ?
EXECUTIONCONTEXT_GETNATIVEDATAPATH => ?
