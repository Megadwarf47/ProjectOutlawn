///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ProcessorData.h>

namespace fb {
	class EmitterDocument;
}

namespace fb {
	class BaseEmitterData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BaseEmitterData"); }
		virtual ~BaseEmitterData() override {}
		BaseEmitterData() {
		};

		CtrRef<EmitterDocument> m_emitterAsset; // 0x28 (40)
	}; // 0x30 (48)
}

