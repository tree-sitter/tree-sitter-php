import globals from "globals";
import google from "eslint-config-google";

export default {
  ...google,
  languageOptions: {
    ecmaVersion: "latest",
    sourceType: "module",
    globals: {
      ...globals.commonjs,
      ...globals.es2021,
    },
  },
  rules: {
    "arrow-parens": "off",
    camelcase: "off",
    indent: [
      "error",
      2,
      {
        SwitchCase: 1,
      },
    ],
    "max-len": [
      "error",
      {
        code: 160,
        ignoreComments: true,
        ignoreUrls: true,
        ignoreStrings: true,
      },
    ],
    "spaced-comment": [
      "warn",
      "always",
      {
        line: {
          markers: ["/"],
        },
      },
    ],
  },
};
