#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPayloadDto_t {
    std::string body;
    std::string method;
    std::map<std::string, std::string> headers;
    std::string path;
  };

  inline void to_json(nlohmann::json& j, const LcdsPayloadDto_t& v) {
    j["body"] = v.body;
    j["method"] = v.method;
    j["headers"] = v.headers;
    j["path"] = v.path;
  }

  inline void from_json(const nlohmann::json& j, LcdsPayloadDto_t& v) {
    v.body = j.at("body").get<std::string>();
    v.method = j.at("method").get<std::string>();
    v.headers = j.at("headers").get<std::map<std::string, std::string>>();
    v.path = j.at("path").get<std::string>();
  }
}
