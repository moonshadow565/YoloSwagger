#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashFoundationError_t {
    DESERIALIZATION_FAILED_E = 2,
    CLASH_DISABLED_E = 1,
    CLASH_NOT_INITIALIZED_E = 0,
    GAMEFLOW_UNAVAILABLE_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashFoundationError_t& v) {
    switch(v) {
      case LolClashFoundationError_t::DESERIALIZATION_FAILED_E:
        j = "DESERIALIZATION_FAILED";
      break;
      case LolClashFoundationError_t::CLASH_DISABLED_E:
        j = "CLASH_DISABLED";
      break;
      case LolClashFoundationError_t::CLASH_NOT_INITIALIZED_E:
        j = "CLASH_NOT_INITIALIZED";
      break;
      case LolClashFoundationError_t::GAMEFLOW_UNAVAILABLE_E:
        j = "GAMEFLOW_UNAVAILABLE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashFoundationError_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DESERIALIZATION_FAILED"){
      v = LolClashFoundationError_t::DESERIALIZATION_FAILED_E;
      return;
    }
    if(s == "CLASH_DISABLED"){
      v = LolClashFoundationError_t::CLASH_DISABLED_E;
      return;
    }
    if(s == "CLASH_NOT_INITIALIZED"){
      v = LolClashFoundationError_t::CLASH_NOT_INITIALIZED_E;
      return;
    }
    if(s == "GAMEFLOW_UNAVAILABLE"){
      v = LolClashFoundationError_t::GAMEFLOW_UNAVAILABLE_E;
      return;
    }
  }
}
