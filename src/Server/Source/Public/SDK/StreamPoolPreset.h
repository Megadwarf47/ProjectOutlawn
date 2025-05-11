///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class StreamPoolMapping;
}

namespace fb {
	class StreamPoolPreset : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StreamPoolPreset"); }
		virtual ~StreamPoolPreset() override {}
		StreamPoolPreset() {
		};

		RefArray<StreamPoolMapping> m_mappings; // 0x10 (16)
	}; // 0x18 (24)
}

