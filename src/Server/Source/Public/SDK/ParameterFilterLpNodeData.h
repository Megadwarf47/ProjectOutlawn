///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/ParameterFilterLpNodeVersion.h>

namespace fb {
	class ParameterFilterLpNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ParameterFilterLpNodeData"); }
		virtual ~ParameterFilterLpNodeData() override {}
		ParameterFilterLpNodeData() {
			m_version = ParameterFilterLpNodeVersion::ParameterFilterLpNodeVersion_2010_2;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		AudioGraphNodePort m_hz; // 0x20 (32)
		ParameterFilterLpNodeVersion m_version; // 0x28 (40)
	}; // 0x30 (48)
}

