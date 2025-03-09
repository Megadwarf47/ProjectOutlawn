///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PointCloudAttributeQuantization.h>
#include <fb/PointCloudAttributeUsage.h>

namespace fb {
	struct AnimatedPointCloudAttributeDesc {
		AnimatedPointCloudAttributeDesc() {
			m_usage = PointCloudAttributeUsage::PointCloudAttributeUsage_Position;
			m_iFrameQuantization = PointCloudAttributeQuantization::PointCloudAttributeQuantization_s10e5;
			m_dFrameQuantization = PointCloudAttributeQuantization::PointCloudAttributeQuantization_s5e5;
		};

		PointCloudAttributeUsage m_usage; // 0x0 (0)
		PointCloudAttributeQuantization m_iFrameQuantization; // 0x4 (4)
		PointCloudAttributeQuantization m_dFrameQuantization; // 0x8 (8)
	}; // 0xC (12)
}

