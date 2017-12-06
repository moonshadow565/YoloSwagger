#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolReplaysMetadataState_t {
    unsupported_E = 9,
    lost_E = 8,
    error_E = 10,
    download_E = 3,
    found_E = 1,
    checking_E = 0,
    downloading_E = 4,
    watch_E = 2,
    incompatible_E = 5,
    missingOrExpired_E = 6,
    retryDownload_E = 7,
  };

  inline void to_json(nlohmann::json& j, const LolReplaysMetadataState_t& v) {
    switch(v) {
      case LolReplaysMetadataState_t::unsupported_E:
        j = "unsupported";
      break;
      case LolReplaysMetadataState_t::lost_E:
        j = "lost";
      break;
      case LolReplaysMetadataState_t::error_E:
        j = "error";
      break;
      case LolReplaysMetadataState_t::download_E:
        j = "download";
      break;
      case LolReplaysMetadataState_t::found_E:
        j = "found";
      break;
      case LolReplaysMetadataState_t::checking_E:
        j = "checking";
      break;
      case LolReplaysMetadataState_t::downloading_E:
        j = "downloading";
      break;
      case LolReplaysMetadataState_t::watch_E:
        j = "watch";
      break;
      case LolReplaysMetadataState_t::incompatible_E:
        j = "incompatible";
      break;
      case LolReplaysMetadataState_t::missingOrExpired_E:
        j = "missingOrExpired";
      break;
      case LolReplaysMetadataState_t::retryDownload_E:
        j = "retryDownload";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolReplaysMetadataState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "unsupported"){
      v = LolReplaysMetadataState_t::unsupported_E;
      return;
    }
    if(s == "lost"){
      v = LolReplaysMetadataState_t::lost_E;
      return;
    }
    if(s == "error"){
      v = LolReplaysMetadataState_t::error_E;
      return;
    }
    if(s == "download"){
      v = LolReplaysMetadataState_t::download_E;
      return;
    }
    if(s == "found"){
      v = LolReplaysMetadataState_t::found_E;
      return;
    }
    if(s == "checking"){
      v = LolReplaysMetadataState_t::checking_E;
      return;
    }
    if(s == "downloading"){
      v = LolReplaysMetadataState_t::downloading_E;
      return;
    }
    if(s == "watch"){
      v = LolReplaysMetadataState_t::watch_E;
      return;
    }
    if(s == "incompatible"){
      v = LolReplaysMetadataState_t::incompatible_E;
      return;
    }
    if(s == "missingOrExpired"){
      v = LolReplaysMetadataState_t::missingOrExpired_E;
      return;
    }
    if(s == "retryDownload"){
      v = LolReplaysMetadataState_t::retryDownload_E;
      return;
    }
  }
}
