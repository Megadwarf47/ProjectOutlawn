///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class TextureStreamingSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureStreamingSettings"); }
		virtual ~TextureStreamingSettings() override {}
		TextureStreamingSettings() {
			m_forceMipmap = -1;
			m_minMipmapCount = 7;
			m_maxMipmapCount = 15;
			m_mipmapBias = -0.5f;
			m_maxTextureSizeKb = 0;
			m_fadeMipmapTime = 0.5f;
			m_minTextureSize = 0;
			m_poolSize = 5000;
			m_poolHeadroomSize = 2000;
			m_onDemandPoolSize = 2048;
			m_xenonFinalPoolSizeAdjustment = 0;
			m_xenonRetailPoolSizeAdjustment = 0;
			m_defragFrameTransferLimit = 1500;
			m_maxPendingLoadCount = 4;
			m_maxPendingUnloadCount = 4;
			m_maxFrameTextureCreateSize = 0;
			m_maxFrameTextureCreateCount = 20;
			m_priorityThreshold = 1.25f;
			m_listViewPageIndex = 0;
			m_enable = true;
			m_updateEnable = true;
			m_dynamicLoadingEnable = false;
			m_chunkLoadEnable = true;
			m_instantUnloadingEnable = false;
			m_onlyWantedInPool = true;
			m_forceWantedEnable = false;
			m_asyncCreatesEnable = false;
			m_loadMipmapsEnable = true;
			m_uploadMipmapsEnable = true;
			m_unloadInPlaceEnable = true;
			m_textureUpdateEnable = true;
			m_immutableUsageEnable = true;
			m_mipmapsEnable = true;
			m_fadeMipmapsEnable = false;
			m_overridePoolSize = false;
			m_poolEnable = true;
			m_defragEnable = true;
			m_defragTransfersEnable = true;
			m_drawStatsEnable = false;
			m_drawTextureGroupStatsEnable = false;
			m_drawTextureFormatStatsEnable = false;
			m_drawLoadingListEnable = false;
			m_drawPriorityListEnable = false;
			m_dumpLoadedList = false;
			m_useConditionalStreaming = false;
		};

		s32 m_forceMipmap; // 0x10 (16)
		u32 m_minMipmapCount; // 0x14 (20)
		u32 m_maxMipmapCount; // 0x18 (24)
		float m_mipmapBias; // 0x1C (28)
		u32 m_maxTextureSizeKb; // 0x20 (32)
		float m_fadeMipmapTime; // 0x24 (36)
		u32 m_minTextureSize; // 0x28 (40)
		u32 m_poolSize; // 0x2C (44)
		u32 m_poolHeadroomSize; // 0x30 (48)
		u32 m_onDemandPoolSize; // 0x34 (52)
		u32 m_xenonFinalPoolSizeAdjustment; // 0x38 (56)
		u32 m_xenonRetailPoolSizeAdjustment; // 0x3C (60)
		u32 m_defragFrameTransferLimit; // 0x40 (64)
		u32 m_maxPendingLoadCount; // 0x44 (68)
		u32 m_maxPendingUnloadCount; // 0x48 (72)
		u32 m_maxFrameTextureCreateSize; // 0x4C (76)
		u32 m_maxFrameTextureCreateCount; // 0x50 (80)
		float m_priorityThreshold; // 0x54 (84)
		u32 m_listViewPageIndex; // 0x58 (88)
		bool m_enable; // 0x5C (92)
		bool m_updateEnable; // 0x5D (93)
		bool m_dynamicLoadingEnable; // 0x5E (94)
		bool m_chunkLoadEnable; // 0x5F (95)
		bool m_instantUnloadingEnable; // 0x60 (96)
		bool m_onlyWantedInPool; // 0x61 (97)
		bool m_forceWantedEnable; // 0x62 (98)
		bool m_asyncCreatesEnable; // 0x63 (99)
		bool m_loadMipmapsEnable; // 0x64 (100)
		bool m_uploadMipmapsEnable; // 0x65 (101)
		bool m_unloadInPlaceEnable; // 0x66 (102)
		bool m_textureUpdateEnable; // 0x67 (103)
		bool m_immutableUsageEnable; // 0x68 (104)
		bool m_mipmapsEnable; // 0x69 (105)
		bool m_fadeMipmapsEnable; // 0x6A (106)
		bool m_overridePoolSize; // 0x6B (107)
		bool m_poolEnable; // 0x6C (108)
		bool m_defragEnable; // 0x6D (109)
		bool m_defragTransfersEnable; // 0x6E (110)
		bool m_drawStatsEnable; // 0x6F (111)
		bool m_drawTextureGroupStatsEnable; // 0x70 (112)
		bool m_drawTextureFormatStatsEnable; // 0x71 (113)
		bool m_drawLoadingListEnable; // 0x72 (114)
		bool m_drawPriorityListEnable; // 0x73 (115)
		bool m_dumpLoadedList; // 0x74 (116)
		bool m_useConditionalStreaming; // 0x75 (117)
	}; // 0x78 (120)
}

