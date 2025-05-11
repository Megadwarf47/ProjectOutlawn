///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class ClientSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientSettings"); }
		virtual ~ClientSettings() override {}
		ClientSettings() {
			m_padIndex = 0;
			m_team = 0;
			m_spawnPointIndex = -1;
			m_aimScale = 1.f;
			m_mouseSensitivityMin = 0.01f;
			m_mouseSensitivitySliderRange = 0.1f;
			m_mouseSensitivityFactor = 2.f;
			m_mouseSensitivityPower = 1.f;
			m_xenonGamepadDeadZoneCenter = 0.22f;
			m_xenonGamepadDeadZoneAxis = 0.15f;
			m_xenonGamepadDeadZoneOffsetAxis = 0.5f;
			m_pS3GamepadDeadZoneCenter = 0.22f;
			m_pS3GamepadDeadZoneAxis = 0.15f;
			m_pS3GamepadDeadZoneOffsetAxis = 0.5f;
			m_pcGamepadDeadZoneCenter = 0.22f;
			m_pcGamepadDeadZoneAxis = 0.15f;
			m_pcGamepadDeadZoneOffsetAxis = 0.5f;
			m_gen4aGamepadDeadZoneCenter = 0.22f;
			m_gen4aGamepadDeadZoneAxis = 0.15f;
			m_gen4aGamepadDeadZoneOffsetAxis = 0.5f;
			m_gen4bGamepadDeadZoneCenter = 0.22f;
			m_gen4bGamepadDeadZoneAxis = 0.15f;
			m_gen4bGamepadDeadZoneOffsetAxis = 0.5f;
			m_incomingFrequency = 10.f;
			m_incomingRate = 80000;
			m_outgoingRate = 30000;
			m_loadingTimeout = 15.f;
			m_loadedTimeout = 15.f;
			m_ingameTimeout = 15.f;
			m_isSpectator = false;
			m_vsyncEnable = false;
			m_visualFrameInterpolation = false;
			m_debrisClusterEnabled = true;
			m_vegetationEnabled = true;
			m_forceEnabled = true;
			m_worldRenderEnabled = true;
			m_terrainEnabled = true;
			m_waterPhysicsEnabled = true;
			m_overgrowthEnabled = true;
			m_effectsEnabled = true;
			m_emittersEnabled = true;
			m_autoIncrementPadIndex = false;
			m_lipSyncEnabled = true;
			m_onDamageSpottingEnabled = true;
			m_ignoreClientFireRateMultiplier = false;
			m_pauseGameOnStartUp = false;
			m_skipFastLevelLoad = false;
			m_inputEnable = true;
			m_screenshotToFile = false;
			m_loadMenu = true;
			m_debugMenuOnLThumb = false;
			m_invertFreeCamera = false;
			m_renderTags = false;
			m_invertPitch = false;
			m_invertPadPcRightStick = false;
			m_scheme0FlipY = false;
			m_scheme1FlipY = false;
			m_scheme2FlipY = false;
			m_invertYaw = false;
			m_consoleInputEmulation = false;
			m_sampleInputEveryVisualFrame = false;
			m_havokVisualDebugger = false;
			m_havokVDBShowsEffectsWorld = false;
			m_havokCaptureToFile = false;
			m_useMouseAndKeyboardSystem = true;
			m_useGlobalGamePadInput = true;
			m_showBuildId = false;
			m_extractPersistenceInformation = false;
			m_enableRestTool = false;
			m_localVehicleSimulationEnabled = true;
			m_asyncClientBulletEntity = true;
			m_autoUnspawnDynamicObjects = true;
			m_quitGameOnServerDisconnect = false;
			m_debugTrackAllPlayersInSpawnScreen = false;
			m_useOldKillerCamera = false;
			m_luaOptionSetEnable = true;
		};

		Array<bool> m_padsRumbleEnabled; // 0x20 (32)
		Array<u32> m_padsIndex; // 0x28 (40)
		u32 m_padIndex; // 0x30 (48)
		String m_screenshotFilename; // 0x38 (56)
		String m_screenshotSuffix; // 0x40 (64)
		u32 m_team; // 0x48 (72)
		s32 m_spawnPointIndex; // 0x4C (76)
		String m_serverIp; // 0x50 (80)
		String m_secondaryServerIp; // 0x58 (88)
		float m_aimScale; // 0x60 (96)
		float m_mouseSensitivityMin; // 0x64 (100)
		float m_mouseSensitivitySliderRange; // 0x68 (104)
		float m_mouseSensitivityFactor; // 0x6C (108)
		float m_mouseSensitivityPower; // 0x70 (112)
		float m_xenonGamepadDeadZoneCenter; // 0x74 (116)
		float m_xenonGamepadDeadZoneAxis; // 0x78 (120)
		float m_xenonGamepadDeadZoneOffsetAxis; // 0x7C (124)
		float m_pS3GamepadDeadZoneCenter; // 0x80 (128)
		float m_pS3GamepadDeadZoneAxis; // 0x84 (132)
		float m_pS3GamepadDeadZoneOffsetAxis; // 0x88 (136)
		float m_pcGamepadDeadZoneCenter; // 0x8C (140)
		float m_pcGamepadDeadZoneAxis; // 0x90 (144)
		float m_pcGamepadDeadZoneOffsetAxis; // 0x94 (148)
		float m_gen4aGamepadDeadZoneCenter; // 0x98 (152)
		float m_gen4aGamepadDeadZoneAxis; // 0x9C (156)
		float m_gen4aGamepadDeadZoneOffsetAxis; // 0xA0 (160)
		float m_gen4bGamepadDeadZoneCenter; // 0xA4 (164)
		float m_gen4bGamepadDeadZoneAxis; // 0xA8 (168)
		float m_gen4bGamepadDeadZoneOffsetAxis; // 0xAC (172)
		String m_gamepadGuid; // 0xB0 (176)
		float m_incomingFrequency; // 0xB8 (184)
		u32 m_incomingRate; // 0xBC (188)
		u32 m_outgoingRate; // 0xC0 (192)
		float m_loadingTimeout; // 0xC4 (196)
		float m_loadedTimeout; // 0xC8 (200)
		float m_ingameTimeout; // 0xCC (204)
		bool m_isSpectator; // 0xD0 (208)
		bool m_vsyncEnable; // 0xD1 (209)
		bool m_visualFrameInterpolation; // 0xD2 (210)
		bool m_debrisClusterEnabled; // 0xD3 (211)
		bool m_vegetationEnabled; // 0xD4 (212)
		bool m_forceEnabled; // 0xD5 (213)
		bool m_worldRenderEnabled; // 0xD6 (214)
		bool m_terrainEnabled; // 0xD7 (215)
		bool m_waterPhysicsEnabled; // 0xD8 (216)
		bool m_overgrowthEnabled; // 0xD9 (217)
		bool m_effectsEnabled; // 0xDA (218)
		bool m_emittersEnabled; // 0xDB (219)
		bool m_autoIncrementPadIndex; // 0xDC (220)
		bool m_lipSyncEnabled; // 0xDD (221)
		bool m_onDamageSpottingEnabled; // 0xDE (222)
		bool m_ignoreClientFireRateMultiplier; // 0xDF (223)
		bool m_pauseGameOnStartUp; // 0xE0 (224)
		bool m_skipFastLevelLoad; // 0xE1 (225)
		bool m_inputEnable; // 0xE2 (226)
		bool m_screenshotToFile; // 0xE3 (227)
		bool m_loadMenu; // 0xE4 (228)
		bool m_debugMenuOnLThumb; // 0xE5 (229)
		bool m_invertFreeCamera; // 0xE6 (230)
		bool m_renderTags; // 0xE7 (231)
		bool m_invertPitch; // 0xE8 (232)
		bool m_invertPadPcRightStick; // 0xE9 (233)
		bool m_scheme0FlipY; // 0xEA (234)
		bool m_scheme1FlipY; // 0xEB (235)
		bool m_scheme2FlipY; // 0xEC (236)
		bool m_invertYaw; // 0xED (237)
		bool m_consoleInputEmulation; // 0xEE (238)
		bool m_sampleInputEveryVisualFrame; // 0xEF (239)
		bool m_havokVisualDebugger; // 0xF0 (240)
		bool m_havokVDBShowsEffectsWorld; // 0xF1 (241)
		bool m_havokCaptureToFile; // 0xF2 (242)
		bool m_useMouseAndKeyboardSystem; // 0xF3 (243)
		bool m_useGlobalGamePadInput; // 0xF4 (244)
		bool m_showBuildId; // 0xF5 (245)
		bool m_extractPersistenceInformation; // 0xF6 (246)
		bool m_enableRestTool; // 0xF7 (247)
		bool m_localVehicleSimulationEnabled; // 0xF8 (248)
		bool m_asyncClientBulletEntity; // 0xF9 (249)
		bool m_autoUnspawnDynamicObjects; // 0xFA (250)
		bool m_quitGameOnServerDisconnect; // 0xFB (251)
		bool m_debugTrackAllPlayersInSpawnScreen; // 0xFC (252)
		bool m_useOldKillerCamera; // 0xFD (253)
		bool m_luaOptionSetEnable; // 0xFE (254)
	}; // 0x100 (256)
}

