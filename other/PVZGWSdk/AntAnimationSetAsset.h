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

namespace fb {
	class SkeletonAsset;
}

namespace fb {
	class AntAnimationSetAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntAnimationSetAsset"); }
		virtual ~AntAnimationSetAsset() override {}
		AntAnimationSetAsset() {
			m_assetBankResource = ;
			m_actorAssetIndex = -1;
			m_sceneOpMatrixAssetIndex = -1;
			m_useTraj2Ref = false;
			m_allowAnimationCulling = true;
		};

		CtrRef<SkeletonAsset> m_skeletonAsset; // 0x18 (24)
		ResourceRef m_assetBankResource; // 0x20 (32)
		s32 m_actorAssetIndex; // 0x28 (40)
		Array<s32> m_clipAssetIndices; // 0x30 (48)
		Array<s32> m_loopingClipAssetIndices; // 0x38 (56)
		s32 m_sceneOpMatrixAssetIndex; // 0x40 (64)
		bool m_useTraj2Ref; // 0x44 (68)
		bool m_allowAnimationCulling; // 0x45 (69)
	}; // 0x48 (72)
}

