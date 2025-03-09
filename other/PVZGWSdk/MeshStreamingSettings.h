///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class MeshStreamingSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshStreamingSettings"); }
		virtual ~MeshStreamingSettings() override {}
		MeshStreamingSettings() {
			m_maxUnloadCountPerFrame = 0;
			m_poolSize = 100000;
			m_poolHeadroomSize = 1500;
			m_ps3CellPoolSize = 3200;
			m_ps3CellPoolHeadroomSize = 400;
			m_xenonFinalPoolSizeAdjustment = 0;
			m_xenonRetailPoolSizeAdjustment = 0;
			m_defragTransferLimit = 1000;
			m_ps3CellDefragTransferLimit = 250;
			m_forceLod = -1;
			m_maxPendingLoadCount = 4;
			m_distanceMin = 0.1f;
			m_listViewPageIndex = 0;
			m_listViewSortOrder = 2;
			m_reservedPositionedInstanceCount = 12288;
			m_reservedDistancedInstanceCount = 128;
			m_enable = true;
			m_updateEnable = true;
			m_updateJobEnable = true;
			m_priorityJobEnable = true;
			m_prioritySpuJobEnable = true;
			m_useSlowTexturePrio = false;
			m_dynamicLoadingEnable = false;
			m_instantUnloadingEnable = false;
			m_asyncCreatesEnable = true;
			m_dxImmutableUsageEnable = true;
			m_overridePoolSizes = false;
			m_defragEnable = true;
			m_defragTransfersEnable = true;
			m_prioritizeVisibleMeshesFirstEnable = false;
			m_prioritizeVisibleLodsFirstEnable = false;
			m_prioritizeVisibleLoadsEnable = true;
			m_prioritizeTexturesEnable = true;
			m_highestPriorityEnable = true;
			m_prioritizeNearestPointEnable = true;
			m_drawInstanceBoxesEnable = false;
			m_drawStatsEnable = false;
			m_drawMissingListEnable = false;
			m_drawPriorityListEnable = false;
			m_drawLoadingListEnable = false;
			m_drawMeshListEnable = false;
			m_drawNonStreamedListEnable = false;
			m_dumpLoadedList = false;
			m_useConditionalStreaming = false;
		};

		u32 m_maxUnloadCountPerFrame; // 0x10 (16)
		u32 m_poolSize; // 0x14 (20)
		u32 m_poolHeadroomSize; // 0x18 (24)
		u32 m_ps3CellPoolSize; // 0x1C (28)
		u32 m_ps3CellPoolHeadroomSize; // 0x20 (32)
		u32 m_xenonFinalPoolSizeAdjustment; // 0x24 (36)
		u32 m_xenonRetailPoolSizeAdjustment; // 0x28 (40)
		u32 m_defragTransferLimit; // 0x2C (44)
		u32 m_ps3CellDefragTransferLimit; // 0x30 (48)
		s32 m_forceLod; // 0x34 (52)
		u32 m_maxPendingLoadCount; // 0x38 (56)
		float m_distanceMin; // 0x3C (60)
		u32 m_listViewPageIndex; // 0x40 (64)
		u32 m_listViewSortOrder; // 0x44 (68)
		u32 m_reservedPositionedInstanceCount; // 0x48 (72)
		u32 m_reservedDistancedInstanceCount; // 0x4C (76)
		bool m_enable; // 0x50 (80)
		bool m_updateEnable; // 0x51 (81)
		bool m_updateJobEnable; // 0x52 (82)
		bool m_priorityJobEnable; // 0x53 (83)
		bool m_prioritySpuJobEnable; // 0x54 (84)
		bool m_useSlowTexturePrio; // 0x55 (85)
		bool m_dynamicLoadingEnable; // 0x56 (86)
		bool m_instantUnloadingEnable; // 0x57 (87)
		bool m_asyncCreatesEnable; // 0x58 (88)
		bool m_dxImmutableUsageEnable; // 0x59 (89)
		bool m_overridePoolSizes; // 0x5A (90)
		bool m_defragEnable; // 0x5B (91)
		bool m_defragTransfersEnable; // 0x5C (92)
		bool m_prioritizeVisibleMeshesFirstEnable; // 0x5D (93)
		bool m_prioritizeVisibleLodsFirstEnable; // 0x5E (94)
		bool m_prioritizeVisibleLoadsEnable; // 0x5F (95)
		bool m_prioritizeTexturesEnable; // 0x60 (96)
		bool m_highestPriorityEnable; // 0x61 (97)
		bool m_prioritizeNearestPointEnable; // 0x62 (98)
		bool m_drawInstanceBoxesEnable; // 0x63 (99)
		bool m_drawStatsEnable; // 0x64 (100)
		bool m_drawMissingListEnable; // 0x65 (101)
		bool m_drawPriorityListEnable; // 0x66 (102)
		bool m_drawLoadingListEnable; // 0x67 (103)
		bool m_drawMeshListEnable; // 0x68 (104)
		bool m_drawNonStreamedListEnable; // 0x69 (105)
		bool m_dumpLoadedList; // 0x6A (106)
		bool m_useConditionalStreaming; // 0x6B (107)
	}; // 0x70 (112)
}

