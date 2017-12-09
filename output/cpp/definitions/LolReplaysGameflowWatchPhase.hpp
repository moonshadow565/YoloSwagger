#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolReplaysGameflowWatchPhase_t {
    WatchInProgress_E = 2,
    None_E = 0,
    WatchFailedToLaunch_E = 3,
    WatchStarted_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowWatchPhase_t& v) {
    switch(v) {
      case LolReplaysGameflowWatchPhase_t::WatchInProgress_E:
        j = "WatchInProgress";
      break;
      case LolReplaysGameflowWatchPhase_t::None_E:
        j = "None";
      break;
      case LolReplaysGameflowWatchPhase_t::WatchFailedToLaunch_E:
        j = "WatchFailedToLaunch";
      break;
      case LolReplaysGameflowWatchPhase_t::WatchStarted_E:
        j = "WatchStarted";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowWatchPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WatchInProgress"){
      v = LolReplaysGameflowWatchPhase_t::WatchInProgress_E;
      return;
    }
    if(s == "None"){
      v = LolReplaysGameflowWatchPhase_t::None_E;
      return;
    }
    if(s == "WatchFailedToLaunch"){
      v = LolReplaysGameflowWatchPhase_t::WatchFailedToLaunch_E;
      return;
    }
    if(s == "WatchStarted"){
      v = LolReplaysGameflowWatchPhase_t::WatchStarted_E;
      return;
    }
  }
  inline std::string to_string(const LolReplaysGameflowWatchPhase_t& v) {
    switch(v) {
      case LolReplaysGameflowWatchPhase_t::WatchInProgress_E:
        return "WatchInProgress";
      case LolReplaysGameflowWatchPhase_t::None_E:
        return "None";
      case LolReplaysGameflowWatchPhase_t::WatchFailedToLaunch_E:
        return "WatchFailedToLaunch";
      case LolReplaysGameflowWatchPhase_t::WatchStarted_E:
        return "WatchStarted";
    }
  }

}
