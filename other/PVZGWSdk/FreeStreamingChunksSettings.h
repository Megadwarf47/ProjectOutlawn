///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/FreeStreamingChunksLoadInfo.h>
#include <fb/SystemSettings.h>

namespace fb {
	class FreeStreamingChunksSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FreeStreamingChunksSettings"); }
		virtual ~FreeStreamingChunksSettings() override {}
		FreeStreamingChunksSettings() {
			m_defaultLoadMask = 0;
		};

		s32 m_defaultLoadMask; // 0x20 (32)
		Array<String> m_superBundles; // 0x28 (40)
		Array<FreeStreamingChunksLoadInfo> m_chunkSuperBundles; // 0x30 (48)
		Array<s32> m_loadMasks; // 0x38 (56)
	}; // 0x40 (64)
}

