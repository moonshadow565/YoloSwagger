#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RiotMessagingServiceMessage_t {
    std::string payload;
    int64_t timestamp;
    std::string version;
    std::string service;
    std::string resource;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceMessage_t& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
    j["service"] = v.service;
    j["resource"] = v.resource;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceMessage_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.version = j.at("version").get<std::string>();
    v.service = j.at("service").get<std::string>();
    v.resource = j.at("resource").get<std::string>();
  }
  inline std::string to_string(const RiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
