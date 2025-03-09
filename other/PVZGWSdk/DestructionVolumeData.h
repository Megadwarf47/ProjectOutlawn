///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AxisAlignedBox.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Vec4.h>

namespace fb {
	class DestructionVolumeAsset;
}

namespace fb {
	class DestructionVolumeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionVolumeData"); }
		virtual ~DestructionVolumeData() override {}
		DestructionVolumeData() {
		};

		CtrRef<DestructionVolumeAsset> m_asset; // 0x10 (16)
		Array<Vec4> m_impacts; // 0x18 (24)
		AxisAlignedBox m_boundingBox; // 0x20 (32)
		Array<u32> m_partToImpactIndices; // 0x40 (64)
	}; // 0x50 (80)
}

