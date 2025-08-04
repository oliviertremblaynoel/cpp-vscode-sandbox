# hadolint ignore=DL3007
FROM lscr.io/linuxserver/code-server:latest

ARG PROJECT_NAME
LABEL \
    org.opencontainers.image.title="$PROJECT_NAME" \
    org.opencontainers.image.description="vscode server C++ development sandbox" \
    org.opencontainers.image.version="1.0" \
    org.opencontainers.image.licenses="GPL-3.0" \
    org.opencontainers.image.authors="Olivier Tremblay-Noel" \
    org.opencontainers.image.url="https://hub.docker.com/repository/docker/oliviertremblaynoel/$PROJECT_NAME" \
    org.opencontainers.image.source="https://github.com/oliviertremblaynoel/$PROJECT_NAME"

# hadolint ignore=DL3008
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        clang \
        cmake \
        lldb \
        gdb \
        build-essential \
        manpages-dev \
        ranger \
        && apt-get clean && rm -rf /var/lib/apt/lists/*

COPY ./sandbox /defaults

RUN mkdir /custom-cont-init.d/

COPY entrypoint.sh /custom-cont-init.d/10-init-volume.sh

RUN chmod +x /custom-cont-init.d/10-init-volume.sh

VOLUME /sandbox
