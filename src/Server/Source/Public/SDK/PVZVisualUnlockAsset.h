///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CustomizationLayer.h>
#include <fb/GameplayBones.h>
#include <fb/VisualUnlockAsset.h>

namespace fb {
	class PVZVisualUnlockAsset : public VisualUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZVisualUnlockAsset"); }
		virtual ~PVZVisualUnlockAsset() override {}
		PVZVisualUnlockAsset() {
			m_boneToAttachEffect = GameplayBones::GameplayBones_UndefinedBone;
			m_layer = CustomizationLayer::CL_Undefined;
		};

		GameplayBones m_boneToAttachEffect; // 0x90 (144)
		CustomizationLayer m_layer; // 0x94 (148)
		Array<CustomizationLayer> m_layersMask; // 0x98 (152)
	}; // 0xA0 (160)
}

