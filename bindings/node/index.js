const root = require("path").join(__dirname, "..", "..");

module.exports = require("node-gyp-build")(root);

try {
  module.exports.php.nodeTypeInfo = require("../../php/src/node-types.json");
  module.exports.php_only.nodeTypeInfo = require("../../php_only/src/node-types.json");
} catch (_) { }
