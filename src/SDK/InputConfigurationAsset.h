///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/EditableActionMap.h>
#include <fb/InputConceptIdentifiers.h>
#include <fb/PoseTransition.h>

namespace fb {
	class EntryInputActionBindingsData;
	class EntryInputActionMapsData;
}

namespace fb {
	class InputConfigurationAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputConfigurationAsset"); }
		virtual ~InputConfigurationAsset() override {}
		InputConfigurationAsset() {
			m_togglePoseAction = -467562617;
			m_crouchAction = 899534898;
			m_crouchAndHoldAction = 899534898;
			m_pickupInteractionAction = 1573615674;
			m_pickupInteractionActionKeyboard = 899534898;
			m_sprintReleaseTime = 0.f;
			m_throttleInputRequiredForSprint = 0.5f;
			m_vehicleBoostIsToggleMinInput = 0.5f;
			m_enterVehicleHoldTime = 0.f;
			m_minAbilityInputDelay = 0.5f;
			m_proneToStandOnJump = false;
			m_standAutomaticallyIfSprinting = true;
			m_disableCrouch = false;
			m_disableProne = false;
			m_disableCrawlingWhileFiring = true;
			m_disableCrawlingWhileReloading = true;
			m_disableFiringWhileDeployingBipod = true;
			m_disableFiringWhileJumping = true;
			m_disableSprintingWhileReloading = false;
			m_enableSprintToCrouchTransition = false;
			m_stopSprintingWhenReleasingThrottle = false;
			m_stopSprintingWhenReleasingSprint = true;
			m_waitForSprintReleaseBeforeSprintAgain = true;
			m_vehicleBoostIsToggle = false;
			m_inputCurvesEnabled = false;
		};

		CtrRef<EntryInputActionMapsData> m_defaultInputConceptDefinition; // 0x18 (24)
		Array<InputConceptIdentifiers> m_defaultExclusiveInputConcepts; // 0x20 (32)
		CtrRef<EntryInputActionBindingsData> m_entryInputActionBindings; // 0x28 (40)
		Array<EditableActionMap> m_userConfigurableActionMaps; // 0x30 (48)
		s32 m_togglePoseAction; // 0x38 (56)
		s32 m_crouchAction; // 0x3C (60)
		s32 m_crouchAndHoldAction; // 0x40 (64)
		s32 m_pickupInteractionAction; // 0x44 (68)
		s32 m_pickupInteractionActionKeyboard; // 0x48 (72)
		float m_sprintReleaseTime; // 0x4C (76)
		float m_throttleInputRequiredForSprint; // 0x50 (80)
		float m_vehicleBoostIsToggleMinInput; // 0x54 (84)
		float m_enterVehicleHoldTime; // 0x58 (88)
		Array<PoseTransition> m_firingDisablingTransitions; // 0x60 (96)
		float m_minAbilityInputDelay; // 0x68 (104)
		bool m_proneToStandOnJump; // 0x6C (108)
		bool m_standAutomaticallyIfSprinting; // 0x6D (109)
		bool m_disableCrouch; // 0x6E (110)
		bool m_disableProne; // 0x6F (111)
		bool m_disableCrawlingWhileFiring; // 0x70 (112)
		bool m_disableCrawlingWhileReloading; // 0x71 (113)
		bool m_disableFiringWhileDeployingBipod; // 0x72 (114)
		bool m_disableFiringWhileJumping; // 0x73 (115)
		bool m_disableSprintingWhileReloading; // 0x74 (116)
		bool m_enableSprintToCrouchTransition; // 0x75 (117)
		bool m_stopSprintingWhenReleasingThrottle; // 0x76 (118)
		bool m_stopSprintingWhenReleasingSprint; // 0x77 (119)
		bool m_waitForSprintReleaseBeforeSprintAgain; // 0x78 (120)
		bool m_vehicleBoostIsToggle; // 0x79 (121)
		bool m_inputCurvesEnabled; // 0x7A (122)
	}; // 0x80 (128)
}

