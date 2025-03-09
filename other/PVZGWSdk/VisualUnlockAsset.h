///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlueprintBundleReference.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/UnlockAsset.h>

namespace fb {
	class ObjectBlueprint;
	class VisualUnlockAsset;
}

namespace fb {
	class VisualUnlockAsset : public UnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualUnlockAsset"); }
		virtual ~VisualUnlockAsset() override {}
		VisualUnlockAsset() {
			m_faceposerLibraryIndex = -1;
			m_renderIn1p = false;
			m_onDemandLoaded = true;
			m_visualIsNetworkedResource = true;
		};

		CtrRef<ObjectBlueprint> m_outObjectBlueprint; // 0x40 (64)
		BlueprintBundleReference m_blueprintBundleReference; // 0x48 (72)
		BlueprintBundleReference m_firstPersonBundle; // 0x60 (96)
		s32 m_faceposerLibraryIndex; // 0x78 (120)
		RefArray<VisualUnlockAsset> m_visualUnlockAssets; // 0x80 (128)
		bool m_renderIn1p; // 0x88 (136)
		bool m_onDemandLoaded; // 0x89 (137)
		bool m_visualIsNetworkedResource; // 0x8A (138)
	}; // 0x90 (144)
}

