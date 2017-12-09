#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolHonorV2LoginSessionStates_t {
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2LoginSessionStates_t& v) {
    switch(v) {
      case LolHonorV2LoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolHonorV2LoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolHonorV2LoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolHonorV2LoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2LoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolHonorV2LoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolHonorV2LoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolHonorV2LoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolHonorV2LoginSessionStates_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolHonorV2LoginSessionStates_t& v) {
    switch(v) {
      case LolHonorV2LoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolHonorV2LoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolHonorV2LoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolHonorV2LoginSessionStates_t::ERROR_E:
        return "ERROR";
    }
  }

}
