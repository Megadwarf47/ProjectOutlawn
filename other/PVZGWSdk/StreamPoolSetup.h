///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/StreamStarveMode.h>

namespace fb {
	class StreamPoolSetup : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StreamPoolSetup"); }
		virtual ~StreamPoolSetup() override {}
		StreamPoolSetup() {
			m_streamBufferSizeXenon = 131072;
			m_streamBufferSizePs3 = 32768;
			m_streamBufferSizeWin32 = 32768;
			m_streamBufferSizeGen4a = 32768;
			m_streamBufferSizeGen4b = 32768;
			m_streamBufferSizeMobile = 131072;
			m_streamCountXenon = 1;
			m_streamCountPs3 = 1;
			m_streamCountWin32 = 1;
			m_streamCountGen4a = 1;
			m_streamCountGen4b = 1;
			m_streamCountMobile = 1;
			m_streamReadBlockSizeXenon = 0;
			m_streamReadBlockSizePs3 = 0;
			m_streamReadBlockSizeWin32 = 0;
			m_streamReadBlockSizeGen4a = 0;
			m_streamReadBlockSizeGen4b = 0;
			m_streamReadBlockSizeMobile = 0;
			m_streamStarveMode = StreamStarveMode::StreamStarveMode_Off;
		};

		u32 m_streamBufferSizeXenon; // 0x10 (16)
		u32 m_streamBufferSizePs3; // 0x14 (20)
		u32 m_streamBufferSizeWin32; // 0x18 (24)
		u32 m_streamBufferSizeGen4a; // 0x1C (28)
		u32 m_streamBufferSizeGen4b; // 0x20 (32)
		u32 m_streamBufferSizeMobile; // 0x24 (36)
		u32 m_streamCountXenon; // 0x28 (40)
		u32 m_streamCountPs3; // 0x2C (44)
		u32 m_streamCountWin32; // 0x30 (48)
		u32 m_streamCountGen4a; // 0x34 (52)
		u32 m_streamCountGen4b; // 0x38 (56)
		u32 m_streamCountMobile; // 0x3C (60)
		u32 m_streamReadBlockSizeXenon; // 0x40 (64)
		u32 m_streamReadBlockSizePs3; // 0x44 (68)
		u32 m_streamReadBlockSizeWin32; // 0x48 (72)
		u32 m_streamReadBlockSizeGen4a; // 0x4C (76)
		u32 m_streamReadBlockSizeGen4b; // 0x50 (80)
		u32 m_streamReadBlockSizeMobile; // 0x54 (84)
		StreamStarveMode m_streamStarveMode; // 0x58 (88)
	}; // 0x60 (96)
}

