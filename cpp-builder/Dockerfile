# hadolint ignore=DL3007
FROM debian:bookworm-slim

# hadolint ignore=DL3008
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    && apt-get clean && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /src

CMD ["bash"]
