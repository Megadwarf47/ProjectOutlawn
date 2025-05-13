///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class StreamPoolAsset;
	class StreamPoolSetup;
}

namespace fb {
	class StreamPoolMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StreamPoolMapping"); }
		virtual ~StreamPoolMapping() override {}
		StreamPoolMapping() {
		};

		CtrRef<StreamPoolAsset> m_streamPool; // 0x10 (16)
		CtrRef<StreamPoolSetup> m_streamPoolSetup; // 0x18 (24)
	}; // 0x20 (32)
}

