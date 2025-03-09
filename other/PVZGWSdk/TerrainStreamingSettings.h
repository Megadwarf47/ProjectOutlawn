///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class TerrainStreamingSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainStreamingSettings"); }
		virtual ~TerrainStreamingSettings() override {}
		TerrainStreamingSettings() {
			m_dataLoadJobCount = 128;
			m_activeFreeStreamingDataLoadJobCount = 2;
			m_additionalBlurriness = 0;
			m_invisibleDetailReductionFactor = -1.f;
			m_occludedDetailReductionFactor = -1.f;
			m_heightfieldAtlasSampleCountXFactor = 1;
			m_heightfieldAtlasSampleCountYFactor = 1;
			m_maskAtlasSampleCountXFactor = 1;
			m_maskAtlasSampleCountYFactor = 1;
			m_maskAdditionalBlurriness = 0;
			m_colorAtlasSampleCountXFactor = 1;
			m_colorAtlasSampleCountYFactor = 1;
			m_colorAdditionalBlurriness = 0;
			m_loadOccluderDataEnable = true;
			m_keepPoolFullEnable = true;
		};

		u32 m_dataLoadJobCount; // 0x10 (16)
		u32 m_activeFreeStreamingDataLoadJobCount; // 0x14 (20)
		u32 m_additionalBlurriness; // 0x18 (24)
		float m_invisibleDetailReductionFactor; // 0x1C (28)
		float m_occludedDetailReductionFactor; // 0x20 (32)
		u32 m_heightfieldAtlasSampleCountXFactor; // 0x24 (36)
		u32 m_heightfieldAtlasSampleCountYFactor; // 0x28 (40)
		u32 m_maskAtlasSampleCountXFactor; // 0x2C (44)
		u32 m_maskAtlasSampleCountYFactor; // 0x30 (48)
		u32 m_maskAdditionalBlurriness; // 0x34 (52)
		u32 m_colorAtlasSampleCountXFactor; // 0x38 (56)
		u32 m_colorAtlasSampleCountYFactor; // 0x3C (60)
		u32 m_colorAdditionalBlurriness; // 0x40 (64)
		bool m_loadOccluderDataEnable; // 0x44 (68)
		bool m_keepPoolFullEnable; // 0x45 (69)
	}; // 0x48 (72)
}

